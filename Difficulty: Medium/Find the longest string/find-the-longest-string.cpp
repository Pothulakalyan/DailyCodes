struct TrieNode {
    TrieNode* children[26];
    bool isEnd;
    string word;

    TrieNode() {
        isEnd = false;
        word = "";
        for (int i = 0; i < 26; ++i)
            children[i] = nullptr;
    }
};
class Solution {
  public:
    string longestString(vector<string> &words) {
        TrieNode* root = new TrieNode();

        // Step 1: Insert words into Trie
        for (string word : words) {
            TrieNode* node = root;
            for (char c : word) {
                int idx = c - 'a';
                if (!node->children[idx])
                    node->children[idx] = new TrieNode();
                node = node->children[idx];
            }
            node->isEnd = true;
            node->word = word;
        }

        // Step 2: BFS traversal
        string result = "";
        queue<TrieNode*> q;
        q.push(root);

        while (!q.empty()) {
            TrieNode* current = q.front();
            q.pop();

            // Visit children from z to a (reverse order to ensure lexicographical smallest stays on top)
            for (int i = 25; i >= 0; --i) {
                TrieNode* child = current->children[i];
                if (child && child->isEnd) {
                    q.push(child);
                    if (child->word.length() > result.length() ||
                        (child->word.length() == result.length() && child->word < result)) {
                        result = child->word;
                    }
                }
            }
        }

        return result;
    }
};