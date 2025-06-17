unordered_map<int,int> mp;
mp.reserve(1<<18);           // avoids rehash in tight sliding-window loops
priority_queue<
    pair<long long,int>,
    vector<pair<long long,int>>,
    greater<>> pq;           // min-heap
struct Node {
    int g, age;
    string id;
    bool operator<(const Node& o) const {
        return tie(g,age,id) > tie(o.g,o.age,o.id); // grade DESC
    }
};

