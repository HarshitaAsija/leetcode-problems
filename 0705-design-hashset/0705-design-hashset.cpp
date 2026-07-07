class MyHashSet {

    // Since keys are in the range [0, 1000000],
    // create a boolean array where:
    // true  -> key is present
    // false -> key is absent
    bool hash[1000001];

public:

    MyHashSet() {

        // Alternative:
        // Initially the HashSet is empty,
        // so mark every position as false.
        //memset(hash, false, sizeof(hash));

        
        for(int i = 0; i <= 1000000; i++)
            hash[i] = false;
    }

    void add(int key) {

        // Mark the key as present.
        hash[key] = true;
    }

    void remove(int key) {

        // Mark the key as absent.
        hash[key] = false;
    }

    bool contains(int key) {

        // Return whether the key exists.
        return hash[key];
    }
};