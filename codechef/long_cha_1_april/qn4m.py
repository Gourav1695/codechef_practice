class DisjointSetUnion:
    def __init__(self, n):
        self.parent = [*range(n+1)]
        self.size = [1]*(n+1)
        self.min, self.max = [*range(n+1)], [*range(n+1)]
        self.count = n

    def get(self, a):
        """Returns the identifier (parent) of the set to which a belongs to!"""
        if self.parent[a] == a:
            return a
        x = a
        while a != self.parent[a]:
            a = self.parent[a]
        while x != self.parent[x]:
            self.parent[x], x = a, self.parent[x]
        return a

    def union(self, a, b):
        """Join two sets that contain a and b!"""
        a, b = self.get(a), self.get(b)
        if a != b:
            if self.size[a] > self.size[b]:
                a, b = b, a
            self.parent[a] = b
            self.size[b] += self.size[a]
            self.min[b] = min(self.min[a], self.min[b])
            self.max[b] = max(self.max[a], self.max[b])
            self.count -= 1

   
# Gourav YO
TEst_cases=int(input())
for i in range(TEst_cases):
    no_of_cases=int(input())
    arr=list(map(int,input().split()))
    arr_second=sorted(arr)
    for kk in range(1,no_of_cases-1):
        if arr[kk]<arr[kk-1]:
            ans=arr[kk]
            arr[kk]=arr[kk-1]
            arr[kk-1]=ans
# def count_sets(self):
#     """Returns the number of disjoint sets!"""
#     return self.count
            # break
    if arr==arr_second:
        print("yes")
    else:
        print("no")


def knapsack(limit, values, weights):
    """Returns the maximum value that can be reached using given weights"""
    n = len(weights)
    dp = [0]*(limit+1)
    for i in range(n):
        for j in range(limit, weights[i]-1, -1):
            dp[j] = max(dp[j], values[i] + dp[j - weights[i]])
    return dp[-1]