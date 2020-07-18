#include <iostream>
#include <string>
#include <array>

using namespace std;

int maxLen(int arr[], int size);
void BigInt(int n);
void reduce(int arr[], int size);

int main()
{
    cout << "\tProcedural Programming\n" << endl;

    // Question 1: Plateau program (max sequence length)

    // sequence of sorted integers
    int arr[] = {1,1,1,2,3,3,5,6,6,6,6,7,9};

    cout << "Question 1:" << endl;
    cout << "Longest Sequence: " << maxLen(arr, (sizeof(arr)/sizeof(*arr))) << endl;
    cout << endl;

    // Question 2: Integer plot function (find a smart way to code big integers)
    cout << "Question 2:" << endl;
    int input = 0;
    for(int i = 1; i <= 10; i++)
    {
        input = (input * 10) + i;
        BigInt(input);
    }
    cout << endl;

    // Question 3: Array processing (elimination of three largest values)
    int arr2[] = {9,1,1,6,7,1,2,3,3,5,6,6,6,6,7,9};

    cout << "Question 3:" << endl;
    reduce(arr2, (sizeof(arr2)/sizeof(*arr2)));

    return 0;
}

// Question 1 Function
// a -> Array ; size -> size of the array
int maxLen(int arr[], int size)
{
    int max = 0, temp = arr[0], count = 0;
    int index;

    for(int i = 0; i < size; i++)
    {
        if(temp == arr[i])
        {
            count++;
        }
        else
        {
            temp = arr[i];

            if(max < count)
            {
                max = count;
                count = 1;
                // index = i - 1; // get's the most frequent number
            }
            count = 1;
        }
    }

    // cout << "Most frequent number: " << arr[index] << endl; // displays the most frequent number

    return max;
}

void BigInt(int n)
{
    int count = 0;

    string bigNumbers[] =
            {"  @@    @@@@  @@@@@@    @@  @@@@@@  @@@@  @@@@@@  @@@@   @@@@   @@@@  ",
             " @@@   @@  @@    @@    @@@  @@     @@         @@ @@  @@ @@  @@ @@  @@ ",
             "  @@       @@   @@    @@@@  @@@@@  @@@@@     @@   @@@@   @@@@  @@  @@ ",
             "  @@      @@     @@  @@ @@      @@ @@  @@   @@   @@  @@    @@  @@  @@ ",
             "  @@     @@       @@ @@ @@      @@ @@  @@  @@    @@  @@   @@   @@  @@ ",
             "  @@    @@    @@ @@  @@@@@@ @@  @@ @@  @@ @@     @@  @@  @@    @@  @@ ",
             "@@@@@@ @@@@@@  @@@      @@   @@@@   @@@@  @@      @@@@  @@      @@@@  "};

    string outBigNumbers[] = {};

    // count how many number 123 = 3 or 12 = 2 ...
    while(n > 0)
    {
        n = n / 10;
        count++;
    }

    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < count * 7; j++)
        {
            cout << bigNumbers[i][j];
        }
        cout << endl;
    }
    cout << endl;


}

void reduce(int arr[], int sieze)
{

}
