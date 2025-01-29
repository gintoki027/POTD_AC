// Flatten Nested List Iterator

class NestedIterator
{
public:
    queue<int> que;
    void Flatten(vector<NestedInteger> &nestedList)
    {
        int n = nestedList.size();
        for (int i = 0; i < n; i++)
        {
            NestedInteger &obj = nestedList[i];
            if (obj.isInteger())
            {
                que.push(obj.getInteger());
            }
            else
            {
                Flatten(obj.getList());
            }
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList)
    {
        Flatten(nestedList);
    }

    int next()
    {
        int n = que.front();
        que.pop();
        return n;
    }

    bool hasNext()
    {
        return !que.empty();
    }
};

// TC: O(N)
// SC: O(N)
