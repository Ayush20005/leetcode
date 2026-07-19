class Solution {
public:
bool closeStrings(string word1, string word2) {
    if (word1.size() != word2.size()) return false;

    unordered_map<char, int> freq1, freq2;

    for (char c : word1) freq1[c]++;
    for (char c : word2) freq2[c]++;

    set<char> keys1, keys2;
    vector<int> vals1, vals2;

    for (auto& [ch, cnt] : freq1) { keys1.insert(ch); vals1.push_back(cnt); }
    for (auto& [ch, cnt] : freq2) { keys2.insert(ch); vals2.push_back(cnt); }

    sort(vals1.begin(), vals1.end());
    sort(vals2.begin(), vals2.end());

    return keys1 == keys2 && vals1 == vals2;
}
};