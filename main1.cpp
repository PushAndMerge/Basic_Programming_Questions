#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

typedef pair<double, double> Point;


double cross(const Point& o, const Point& a, const Point& b) {
    return (a.first - o.first) * (b.second - o.second) - (a.second - o.second) * (b.first - o.first);
}

vector<Point> convex_hull(vector<Point>& points) {
    sort(points.begin(), points.end());
    vector<Point> lower, upper;

    for (auto& p : points) {
        while (lower.size() >= 2 && cross(lower[lower.size()-2], lower[lower.size()-1], p) <= 0) {
            lower.pop_back();
        }
        lower.push_back(p);
    }

    for (int i = points.size()-1; i >= 0; --i) {
        while (upper.size() >= 2 && cross(upper[upper.size()-2], upper[upper.size()-1], points[i]) <= 0) {
            upper.pop_back();
        }
        upper.push_back(points[i]);
    }

    lower.pop_back();
    upper.pop_back();
    lower.insert(lower.end(), upper.begin(), upper.end());
    return lower;
}


double dist(const Point& a, const Point& b) {
    return hypot(a.first - b.first, a.second - b.second);
}


double dot(const Point& a, const Point& b) {
    return a.first * b.first + a.second * b.second;
}


double min_area_rect(const vector<Point>& hull) {
    int n = hull.size();
    if (n == 1) return 0.0;
    if (n == 2) return dist(hull[0], hull[1]) * 0.0;

    double ans = 1e18;
    int k = 1;

    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        Point edge = {hull[j].first - hull[i].first, hull[j].second - hull[i].second};
        double edge_len = hypot(edge.first, edge.second);
        Point edge_unit = {edge.first / edge_len, edge.second / edge_len};

        // Find farthest point
        while (true) {
            int k_next = (k + 1) % n;
            if (abs(cross(hull[i], hull[j], hull[k_next])) > abs(cross(hull[i], hull[j], hull[k]))) {
                k = k_next;
            } else {
                break;
            }
        }

        double max_proj = -1e18, min_proj = 1e18;
        double max_width = 0;

        for (const auto& p : hull) {
            Point vec = {p.first - hull[i].first, p.second - hull[i].second};
            double projection = dot(vec, edge_unit);
            max_proj = max(max_proj, projection);
            min_proj = min(min_proj, projection);
            double width = abs(cross(hull[i], hull[j], p)) / edge_len;
            max_width = max(max_width, width);
        }

        double area = (max_proj - min_proj) * max_width;
        ans = min(ans, area);
    }

    return ans;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<Point> points(N);
        for (int i = 0; i < N; ++i) {
            cin >> points[i].first >> points[i].second;
        }
        vector<Point> hull = convex_hull(points);
        double area = min_area_rect(hull);
        cout << fixed << setprecision(10) << area << endl;
    }
    return 0;
}
