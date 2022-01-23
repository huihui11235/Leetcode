class Solution {
private:
    vector<vector<int>> result; // 存放集合
    vector<int> path; // 存放结果
    void backtracking(int n, int k, int startIndex) {
        if (path.size() == k) {
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i <= n; i++) {
            path.push_back(i); // 处理节点 
            backtracking(n, k, i + 1); // 递归
            path.pop_back(); // 回溯
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
      
        backtracking(n, k, 1);
        return result;
    }
};
