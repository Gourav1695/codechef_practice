#include <bits/stdc++.h>
using namespace std;

// Gourav yo
// data_type_answermpressions :
#define ll long long int
#define ull unsigned long long int
#define ui unsigned int
// STL :
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<ll>
#define si set<int>
#define sl set<ll>
#define ip pair<int, int>
#define lp pair<ll, ll>
#define ips pair<string, int>
#define lps pair<string, ll>
#define ipc pair<char, int>
#define lpc pair<char, ll>
#define vip vector<ip>
#define PQ priority_queue
#define vlp vector<lp>
#define hashmap unordered_map
#define msi multiset<int>
#define msl multiset<ll>
#define pb push_back
#define spb insert
#define erase_duplicates(x) x.erase(unique(all(x)), x.end());
#define all(x) x.begin(), x.end()
#define all_0(x) memset(x, 0, sizeof(x))
#define all_neg(x) memset(x, -1, sizeof(x))
#define all_1(x) memset(x, 1, sizeof(x))
// I/O :
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    answerut.tie(0);
#define Read(x) freopen(x, "r", stdin)
#define Write(x) freopen(x, "w", stdout)
#define PI aanswers(-1)
#define take_the_array_noway_INT(x, o, n) \
    for (int i = o; i <= n; i++)          \
    {                                     \
        scanf("%d", &x[i]);               \
    }
#define take_the_array_noway_LL(x, o, n) \
    for (int i = o; i <= n; i++)         \
    {                                    \
        scanf("%lld", &x[i]);            \
    }
#define print_the_array_noway_INT(x, o, n) \
    for (int i = o; i <= n; i++)           \
    {                                      \
        printf("%d ", x[i]);               \
    }                                      \
    printf("\n");
#define print_the_array_noway_LL(x, o, n) \
    for (int i = o; i <= n; i++)          \
    {                                     \
        printf("%lld ", x[i]);            \
    }                                     \
    printf("\n");
#define cin_the_array_noway(x, o, n) \
    for (int i = o; i <= n; i++)     \
    {                                \
        cin >> x[i];                 \
    }
#define answerut_the_array_noway(x, o, n) \
    for (int i = o; i <= n; i++)          \
    {                                     \
        answerut << x[i] << " ";          \
    }                                     \
    answerut << endl;
#define int_in(x) scanf("%d", &x)
#define ll_in(x) scanf("%lld", &x)
#define dbl_in(x) scanf("%lf", &x)
#define char_in(x) scanf(" %c", &x)
#define str_in(x) scanf("%s", &x)
#define int_in2(x, y) scanf("%d %d", &x, &y)
#define int_in3(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define ll_in2(x, y) scanf("%lld %lld", &x, &y)
#define ll_in3(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)
#define int_out(x) printf("%d", x)
#define ll_out(x) printf("%lld", x)
#define char_out(x) printf("%c", x)
#define str_out(x) printf("%s", x)
#define YES printf("YES\n")
#define Yes printf("Yes\n")
#define NO printf("NO\n")
#define nl printf("\n")
#define No printf("No\n")
// extras :
#define e4 int main()
#define checkmate return 0;
#define UNDEFINED 0x3f
#define INF LLONG_MAX
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)

//..............................................Let's Start answerding do your best :D......................................

e4
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    int test_case;
    cin >> test_case;
    while (test_case--)

    {
        ll N;
        int count1 = 1;
        int count2 = 0;
        ll answer = 0;
        cin >> N;
        ll array_now[N];
        for (int i = 0; i < N; i++)
        {
            cin >> array_now[i];

            if (array_now[i - 1] > array_now[i] and i >= 1)
            {
                swap(array_now[i], array_now[i - 1]);
                if ((array_now[i - 1] < array_now[i - 2]) and i >= 2)
                {
                    answer += 2;
                }
                // else if (i == 1)
                // {
                //     answer++;
                // }
                // }
                //  else
                //  {
                //      cout<<AA+1<<" "<<AA+5<<"\n";
                //  }
                //               if ( y> x) {
                //                 int t = y;
                //                  y= x;
                //                 x = t;
                else if (array_now[i - 2] < array_now[i - 1] and i >= 2)
                {
                    answer++;
                }

                else
                {
                    answer++;
                }
            }
        }
        if (answer >= 2)
        {

            printf("No\n");
        }
        else
        {

            printf("Yes\n");
        }
    }
    checkmate;
}
