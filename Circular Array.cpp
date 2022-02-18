int circularArray2(int n, vector<int> endNode) {
    int m = endNode.size();
    vector<int> starts, ends;
    for (int i = 0; i < m - 1; i++) {
        auto start = endNode[i];
        auto end = endNode[i + 1];
        starts.push_back(start);
        ends.push_back(end);
    }

    sort(starts.begin(), starts.end());
    sort(ends.begin(), ends.end());

    int most = 1;
    for (int left = 0, right = 0; right < starts.size(); right++) {
        if (starts[right] <= ends[left]) {
            most = starts[right];
        } else {
            left++;
        }
    }

    return most;
}