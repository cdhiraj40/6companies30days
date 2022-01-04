#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
int *findTwoElement(int *arr, int n) {
    int *ans = new int[2];
    int pos;

    int i = 0;
    while (i < n) {
        pos = arr[i] - 1;
        if (arr[i] != arr[pos]) {
            swap(arr[i], arr[pos]);
        } else i++;
    }
    int a;
    for (i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            ans[1]=i+1;
            ans[0]=arr[i];
            return ans;
        }
    }
    return ans;
}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}