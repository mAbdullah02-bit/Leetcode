class NumberContainers {
public:
    unordered_map<int, int> table;  
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> numToIndices; 
    NumberContainers() {}

    void change(int index, int number) {
        if (table.find(index) != table.end()) {
            int oldNumber = table[index];
            if (oldNumber != number) {
                numToIndices[oldNumber].push(index); 
            }
        }
        
        table[index] = number;
        numToIndices[number].push(index);
    }

    int find(int number) {
        if (numToIndices.find(number) == numToIndices.end()) {
            return -1;
        }

      
        while (!numToIndices[number].empty() && table[numToIndices[number].top()] != number) {
            numToIndices[number].pop();
        }

        return numToIndices[number].empty() ? -1 : numToIndices[number].top();
    }
};

