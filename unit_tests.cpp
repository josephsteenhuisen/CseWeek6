#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vector_struct.h"

using namespace std;

TEST_CASE("TEST CASE 1") {
    cout << "TESTCASE 1 WITH FILE:" << endl;
    string file = "test_input.txt";
    ifstream infile(file);
    string line;
    while(getline(infile, line)) {
        cout << line << endl;
    }
    cout << "FILE OUTPUT: " << endl;
    vector<int_vector> result = output_function(file);
    int_vector first;
    first_line.id = 1;
    first_line.from = 4;
    first_line.to = 7;
    int_vector second;
    second_line.id = 0;
    second_line.from = 3;
    second_line.to = 2;
    CHECK(result[0].id == first.id);
    CHECK(result[0].from == first.from);
    CHECK(result[0].to == first.to);

    CHECK(result[1].id == second.id);
    CHECK(result[1].from == second.from);
    CHECK(result[1].to == second.to);
}
