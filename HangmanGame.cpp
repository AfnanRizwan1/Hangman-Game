#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string create()
{
    int x= time(0);
    srand(x);

    string array[100] = { "Abandon", "Absorb", "Accomplish", "Adapt", "Analyze", "Apprehend", "Articulate", "Assume", "Authenticate", "Benevolent", "Cautious", "Celebrate", "Comprehend", "Confident", "Conquer", "Construct", "Contradict", "Cooperate", "Corroborate", "Cultivate", "Debate", "Decipher", "Dedicate", "Defend", "Demonstrate", "Describe", "Determine", "Differentiate", "Discover", "Distinguish", "Efficient", "Elevate", "Empower", "Endorse", "Enlighten", "Enthusiastic", "Evaluate", "Experiment", "Fascinate", "Formulate", "Generate", "Gratify", "Illuminate", "Immerse", "Innovate", "Interpret", "Investigate", "Juxtapose", "Manifest", "Meditate", "Navigate", "Observe", "Pacify", "Persevere", "Ponder", "Proclaim", "Proliferate", "Prosper", "Question", "Reconcile", "Redeem", "Reevaluate", "Reflect", "Rejuvenate", "Reminisce", "Resonate", "Revitalize", "Safeguard", "Simplify", "Stimulate", "Synchronize", "Thrive", "Transform", "Unify", "Utilize", "Validate", "Visualize", "Wisdom", "Zealous", "Adaptive", "Affirm", "Amplify", "Authenticate", "Balanced", "Cherish", "Collaborate", "Comprehensive", "Convey", "Dedicated", "Determine", "Eloquent", "Empowerment", "Engage", "Exemplify", "Flourish", "Gratitude", "Harmonize", "Inspirational", "Integrity", "Mentorship"};
    int index = rand() % 100;

    string word = array[index];
    return word;

}

bool decision(bool flag, char letter, string res, int count, char word_check[])
{


    for(int i=0; i<count; i++)
    {
        if(res[i] == letter)
        {
            word_check[i] = letter;
        }
    }

    for(int y=0; y<count; y++)
    {
        cout<<word_check[y];
    }

    // cout<<word_check<<endl;

    // bool final=false;
    // if(word_check == res)
    // {
    //     final = true;
    // }

    // cout<<boolalpha<<final<<endl;

    return true;
}

bool draw(int lost_lives)
{
    switch(lost_lives)
    {
        case 0 : 
        {
    cout<<" +---+"<<endl;
    cout<<" |   |"<<endl;
    cout<<" O   |"<<endl;
    cout<<"/|\\  |"<<endl;
    cout<<"/ \\  |"<<endl;
    cout<<"     |"<<endl;
    cout<<"========="<<endl;
        }break;

        case 1 : 
        {
    cout<<" +---+"<<endl;
    cout<<" |   |"<<endl;
    cout<<" O   |"<<endl;
    cout<<"/|\\  |"<<endl;
    cout<<"/    |"<<endl;
    cout<<"     |"<<endl;
    cout<<"========="<<endl;
        }break;

        case 2 : 
        {
    cout<<" +---+"<<endl;
    cout<<" |   |"<<endl;
    cout<<" O   |"<<endl;
    cout<<"/|\\  |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"========="<<endl;
        }break;

        case 3 : 
        {
    cout<<" +---+"<<endl;
    cout<<" |   |"<<endl;
    cout<<" O   |"<<endl;
    cout<<"/|   |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"========="<<endl;
        }break;

        case 4 : 
        {
    cout<<" +---+"<<endl;
    cout<<" |   |"<<endl;
    cout<<" O   |"<<endl;
    cout<<" |   |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"========="<<endl;
        }break;

        case 5 : 
        {
    cout<<" +---+"<<endl;
    cout<<" |   |"<<endl;
    cout<<" O   |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"========="<<endl;
        }break;

        case 6 : 
        {
    cout<<" +---+"<<endl;
    cout<<" |   |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"     |"<<endl;
    cout<<"========="<<endl;
        }break;
    }
}


int main()
{

string res = create();
cout<<res<<endl;

int max_lives;
max_lives=6;

bool final_check = false;


int count=0;
for(int i=0; res[i]!='\0'; i++)
{
    count++;
}
cout<<count<<endl;

char word_check[count];
for (int i = 0; i <count; i++)
{
    word_check[i] = '_';
}

int count_name=0;
string name;
cout<<"Enter your name : "<<endl;
getline(cin,name,'\n');

for(int i=0; name[i]!='\0'; i++)
{
    count_name++;
}
cout<<count_name<<endl;

char letter;

for(int lost_lives=0; lost_lives<max_lives;)
{
    cout<<"Guess a Letter : ";
    cin>>letter;
    bool flag = false;
    bool check = false;

    for(int i=0; i<count; i++)
    {
        if(res[i] == letter)
        {
            cout<<"Congrats! you have guessed the letter right"<<endl;
            flag = true;
            word_check[i] = letter;
        }
    }

    if(flag==true)
    {
        for(int i=0; i<count_name; i++)
        {
            if(name[i] == letter)
            {
                cout<<"The letter also exists in you name!"<<endl;
                check=true;
            }
        }
    }
    // cout<<boolalpha<<flag<<endl;
    // cout<<boolalpha<<check<<endl;

    if(flag==false)
    {
        cout<<"Oops! You loose a life"<<endl;
        ++lost_lives ;     //LOST LIVES
        cout<<"Lost "<<lost_lives<<" lives out of "<<max_lives<<" lives"<<endl;
    }
    if(flag==true)
    {
        if(check==false)
        {
            cout<<"You have guessed it right! but The letter doesn't exist in you name!"<<endl;
            lost_lives=lost_lives;
            cout<<"Lost "<<lost_lives<<" lives out of "<<max_lives<<" lives"<<endl;
        }
    }
    
        if(flag==true)
        {
            if(check==true)
            {
                if(lost_lives == 0)
                {
                    lost_lives = lost_lives;
                    cout<<"Lost "<<lost_lives<<" lives out of "<<max_lives<<" lives"<<endl;
                }
                else
                if(lost_lives>=0)
                {
                    cout<<"Gained another life out of "<<max_lives<<" lives"<<endl;
                    --lost_lives;
                    cout<<"Lost lives are : "<<lost_lives<<endl;
                }
            }
        }

        bool result = decision(flag,letter,res,count,word_check);
        cout<<endl;
        draw(lost_lives);

        bool tap;
        for(int i=0; i<count; i++)
        {
            if(word_check[i] == res[i])
            {
                tap = true;
            }
            else
            {
                tap = false;
                break;
            }
        }

        if(tap==true)
        {
            cout<<"Congratulations! You guessed the word: "<<res<<endl;
            break;
        }
        else
        {
            if(lost_lives == 6 && tap==false)
            {
                cout<<"Game over! The correct word was: "<<res<<endl;
            }
        }
    }
}