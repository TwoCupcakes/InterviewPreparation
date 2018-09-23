#include "../Headers/tree.h"

TreeNode* max_tree(std::vector<int>& nums)
{
    if (nums.empty()) {
        return nullptr;
    }

    int max_idx = 0;

    for (std::size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[max_idx]) {
            max_idx = i;
        }
    }

    TreeNode* root = new TreeNode(nums[max_idx]);
    std::vector<int> left(nums.begin(), nums.begin() + max_idx);
    root->left = max_tree(left);
    std::vector<int> right(nums.begin() + max_idx + 1, nums.end());
    root->right = max_tree(right);

    return root;
}

void test_max_tree()
{
    std::vector<int> input{ 3,2,1,6,0,5 };

    TreeNode* root = max_tree(input);
}
