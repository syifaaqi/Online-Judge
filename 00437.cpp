#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#define maks 90
using namespace std;
 
int Cases, N; 
int A, B, C;
int m[maks];
int answer;

struct brick{
    int x, y, h;
	};
	vector <brick> v;
	
bool cmp(brick x, brick y){
    if (x.x != y.x) return x.x < y.x;
    else return x.y < y.y;
	}
 
int main() {
    while (cin >> N){
        if (N == 0) break;
        v.clear();
        for (int i = 0; i < N; i++){
            cin >> A >> B >> C;
            v.push_back({min(A, B), max(A, B), C});
            v.push_back({min(A, C), max(A, C), B});
            v.push_back({min(B, C), max(B, C), A});
            }
            sort(v.begin(), v.end(), cmp);
            memset(m, 0, sizeof(m));
            answer = 0;
                for (int i = 0; i < N*3; i++){
                m[i] += v[i].h;
                    for (int j = i+1; j < N*3; j++){
                        if (v[i].x < v[j].x && v[i].y < v[j].y) m[j] = max(m[j], m[i]);
                    }
                answer = max(answer, m[i]);
                }
            Cases++;
    cout << "Case " << Cases << ": maximum height = " << answer << endl;
    }
}