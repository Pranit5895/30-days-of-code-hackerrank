

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> v;
        return v;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        return v;
    }

    static int get_expected_result() {
        // complete this function
        vector<int> v = get_array();
        int in = minimum_index(v);
        return in;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(1);
        return v;
    }

    static int get_expected_result() {
        // complete this function
        vector<int> v = get_array();
        int in = minimum_index(v);
        return in;
    }

};


