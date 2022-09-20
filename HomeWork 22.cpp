#include <iostream>
#include <vector>


auto FillZeroes(int width, int height)
{
    std::vector<std::vector<int>> vectorok;


    for (int i = 0; i < height; i++)
    {
        std::vector<int> invectorok;
        for (int y = 0; y < width; y++)
        {
            invectorok.push_back(0);
        }
        vectorok.push_back(invectorok);
    }


    return vectorok;
}


auto FillCin(int width, int height)
{
    std::vector<std::vector<int>> vectorok;


    for (int i = 0; i < height; i++)
    {
        std::vector<int> invectorok;
        for (int y = 0; y < width; y++)
        {
            int user;
            std::cin >> user;
            invectorok.push_back(user);
        }
        vectorok.push_back(invectorok);
    }


    return vectorok;
}


int Sum(std::vector<std::vector<int>> vectorok, int width, int height)
{
    int count = 0;


    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            count += vectorok[i][y];
        }
    }


    return count;
}


int Min(std::vector<std::vector<int>> vectorok, int width, int height)
{
    int count = 999999999999;


    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            if (vectorok[i][y] < count)
                count = vectorok[i][y];
        }
    }


    return count;
}


int Max(std::vector<std::vector<int>> vectorok, int width, int height)
{
    int count = 0;


    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            if (vectorok[i][y] > count)
                count = vectorok[i][y];
        }
    }


    return count;
}


int Below(std::vector<std::vector<int>> vectorok, int width, int height)
{
    int count = 0, sum = 0, ans;


    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            count++;
            sum += vectorok[i][y];
        }
    }


    ans = sum / count;
    return ans;
}


void ShowElements(std::vector<std::vector<int>> vectorok, int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            std::cout << vectorok[i][y] << " ";
        }
        std::cout << "\n";
    }
}


int main()
{
    //ДЛЯ ВЫВОДА ВСЕХ ЭЛЕМЕНТОВ ВЕКТОРА ЕСТЬ ФУНКЦИЯ "ShowElements" !


    //Task01
    std::vector<std::vector<int>> vectorok;
    vectorok = FillZeroes(10, 5);



    //Task02
    std::vector<std::vector<int>> vectorokcinov;
    vectorok = FillCin(5, 6);



    //Task03
    int summ = Sum(vectorokcinov, 5, 6);



    //Task04
    int min = Min(vectorokcinov, 5, 6);



    //Task05
    int max = Max(vectorokcinov, 5, 6);



    //Task06
    int below = Below(vectorokcinov, 5, 6);

}
