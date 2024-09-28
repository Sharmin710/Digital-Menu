#include <iostream>
#include <vector>
#include <string> 

using namespace std;

class Menu
{
public:
    virtual void showMenu() = 0;
};

class Appetizer : public Menu
{
public:
    void showMenu() override
    {
        cout << "APPETIZERS:\n";
        cout << "1. Fried Momo (vegetable & chicken, 10 pieces) - 130 TK\n";
        cout << "2. Steam Momo (vegetable & chicken, 10 pieces) - 150 TK\n";
        cout << "3. Restaurant Special Momo (vegetable, beef keema, 12 pieces) - 200 TK\n\n";
    }
};

class Sushi : public Menu
{
public:
    void showMenu() override
    {
        cout << "SUSHI:\n";
        cout << "4. Hot Date Roll (spicy tuna, cucumber, sake, avocado) - 230 TK (6 pieces)\n";
        cout << "5. Rainbow Roll (tuna, eel, avocado, cucumber) - 350 TK (6 pieces)\n";
        cout << "6. Godzilla Roll (spicy tuna, shrimp tempura, cucumber) - 400 TK (10 pieces)\n\n";
    }
};

class Soup : public Menu
{
public:
    void showMenu() override
    {
        cout << "SOUP:\n";
        cout << "7. Chinese Chicken Mushroom Soup (1:1 - 250 TK)\n";
        cout << "8. Taiwanese Sesame Oil Chicken Soup (1:1 - 300 TK)\n";
        cout << "9. Fish and Tofu Soup (1:1 - 350 TK)\n\n";
    }
};

class Snacks : public Menu
{
public:
    void showMenu() override
    {
        cout << "SNACKS:\n";
        cout << "10. Dim Sums (4 pieces) - 150 TK\n";
        cout << "11. Quick Noodles - 300 TK\n";
        cout << "12. Chicken Wings (4 pieces) - 200 TK\n";
        cout << "13. Spring Rolls (4 pieces) - 150 TK\n";
        cout << "14. Peri-Peri Chicken Satay - 300 TK\n";
        cout << "15. Veg Hakka Noodles (1:1) - 250 TK\n";
        cout << "16. Kung Pao Chicken - 350 TK\n";
        cout << "17. Honey Sesame Chicken - 250 TK\n\n";
    }
};

class TraditionalDishes : public Menu
{
public:
    void showMenu() override
    {
        cout << "TRADITIONAL PLATTER:\n";
        cout << "18. SET-1: Sweet Chicken With Candied Fruits (1:1) - 500 TK\n";
        cout << "19. SET-2: Buttered Lamb (1:1) - 550 TK\n";
        cout << "20. SET-3: Peking Duck - 500 TK\n";
        cout << "21. SET-4: Chinese Hot-Pot (spicy and non-spicy) - 600 TK\n";
        cout << "22. SET-5: Kung Pao Chicken - 500 TK\n\n";
    }
};

class Platter : public Menu
{
public:
    void showMenu() override
    {
        cout << "SEA FOOD PLATTER:\n";
        cout << "23. Shrimp Sezchuan (1:1) - 350 TK\n";
        cout << "24. Drunken Prawn (Made With Prawns, Wine and Spices) - 550 TK\n";
        cout << "25. Salt And Pepper Squid - 400 TK\n";
        cout << "26. Chili Fish - 500 TK\n";
        cout << "27. Stir-Fry Shrimp (1:1) - 350 TK\n\n";
    }

    void showSweetDishes()
    {
        cout << "SWEET DISHES:\n";
        cout << "28. Pineapple Cake (per piece) - 250 TK\n";
        cout << "29. Mango Pomelo Sago - 350 TK\n";
        cout << "30. Nian Gao - 250 TK\n";
        cout << "31. Mango Pudding - 250 TK\n";
        cout << "32. Baked Tapioka Pudding - 350 TK\n";
        cout << "33. Tanghulu (4 pieces) - 250 TK\n\n";
    }
};

class Drinks : public Menu
{
public:
    void showMenu() override
    {
        cout << "DRINKS:\n";
        cout << "34. Pearl Milk Tea - 450 TK\n";
        cout << "35. Yunnan Coffee - 350 TK\n";
        cout << "36. Coconut Milk - 200 TK\n";
        cout << "37. Matcha Tea - 250 TK\n";
        cout << "38. Soy Milk - 250 TK\n";
        cout << "39. Jiuniang - 350 TK\n";
        cout << "40. Winter Melon Tea - 250 TK\n\n";
    }
};

// This function returns the name of the selected item
string getItemName(int choice)
{
    switch (choice)
    {
    case 1:
        return "Fried Momo (130 TK)";
    case 2:
        return "Steam Momo (150 TK)";
    case 3:
        return "Restaurant Special Momo (200 TK)";
    case 4:
        return "Hot Date Roll (230 TK)";
    case 5:
        return "Rainbow Roll (350 TK)";
    case 6:
        return "Godzilla Roll (400 TK)";
    case 7:
        return "Chinese Chicken Mushroom Soup (250 TK)";
    case 8:
        return "Taiwanese Sesame Oil Chicken Soup (300 TK)";
    case 9:
        return "Fish and Tofu Soup (350 TK)";
    case 10:
        return "Dim Sums (150 TK)";
    case 11:
        return "Quick Noodles (300 TK)";
    case 12:
        return "Chicken Wings (200 TK)";
    case 13:
        return "Spring Rolls (150 TK)";
    case 14:
        return "Peri-Peri Chicken Satay (300 TK)";
    case 15:
        return "Veg Hakka Noodles (250 TK)";
    case 16:
        return "Kung Pao Chicken (350 TK)";
    case 17:
        return "Honey Sesame Chicken (250 TK)";
    case 18:
        return "Sweet Chicken With Candied Fruits (500 TK)";
    case 19:
        return "Buttered Lamb (550 TK)";
    case 20:
        return "Peking Duck (500 TK)";
    case 21:
        return "Chinese Hot-Pot (600 TK)";
    case 22:
        return "Kung Pao Chicken (500 TK)";
    case 23:
        return "Shrimp Sezchuan (350 TK)";
    case 24:
        return "Drunken Prawn (550 TK)";
    case 25:
        return "Salt And Pepper Squid (400 TK)";
    case 26:
        return "Chili Fish (500 TK)";
    case 27:
        return "Stir-Fry Shrimp (350 TK)";
    case 28:
        return "Pineapple Cake (250 TK)";
    case 29:
        return "Mango Pomelo Sago (350 TK)";
    case 30:
        return "Nian Gao (250 TK)";
    case 31:
        return "Mango Pudding (250 TK)";
    case 32:
        return "Baked Tapioka Pudding (350 TK)";
    case 33:
        return "Tanghulu (250 TK)";
    case 34:
        return "Pearl Milk Tea (450 TK)";
    case 35:
        return "Yunnan Coffee (350 TK)";
    case 36:
        return "Coconut Milk (200 TK)";
    case 37:
        return "Matcha Tea (250 TK)";
    case 38:
        return "Soy Milk (250 TK)";
    case 39:
        return "Jiuniang (350 TK)";
    case 40:
        return "Winter Melon Tea (250 TK)";

    default:
        return "Invalid item";
    }
}

double calculateTotal(const vector<int>& choices)
{
    double total = 0;
    for (int choice : choices)
    {
        switch (choice)
        {
        case 1:
            total += 130;
            break;
        case 2:
            total += 150;
            break;
        case 3:
            total += 200;
            break;
        case 4:
            total += 230;
            break;
        case 5:
            total += 350;
            break;
        case 6:
            total += 400;
            break;
        case 7:
            total += 250;
            break;
        case 8:
            total += 300;
            break;
        case 9:
            total += 350;
            break;
        case 10:
            total += 150;
            break;
        case 11:
            total += 300;
            break;
        case 12:
            total += 200;
            break;
        case 13:
            total += 150;
            break;
        case 14:
            total += 300;
            break;
        case 15:
            total += 250;
            break;
        case 16:
            total += 350;
            break;
        case 17:
            total += 250;
            break;
        case 18:
            total += 500;
            break;
        case 19:
            total += 550;
            break;
        case 20:
            total += 500;
            break;
        case 21:
            total += 600;
            break;
        case 22:
            total += 500;
            break;
        case 23:
            total += 350;
            break;
        case 24:
            total += 550;
            break;
        case 25:
            total += 400;
            break;
        case 26:
            total += 500;
            break;
        case 27:
            total += 350;
            break;
        case 28:
            total += 250;
            break;
        case 29:
            total += 350;
            break;
        case 30:
            total += 250;
            break;
        case 31:
            total += 250;
            break;
        case 32:
            total += 350;
            break;
        case 33:
            total += 250;
            break;
        case 34:
            total += 450;
            break;
        case 35:
            total += 350;
            break;
        case 36:
            total += 200;
            break;
        case 37:
            total += 250;
            break;
        case 38:
            total += 250;
            break;
        case 39:
            total += 350;
            break;
        case 40:
            total += 250;
            break;
        default:
            break;
        }
    }
    return total;
}

// Function to display the selected items and total
void displayOrder(const vector<int>& choices)
{
    cout << "\nYour selected items:\n";
    for (int i = 0; i < choices.size(); ++i)
    {
        cout << i + 1 << ". " << getItemName(choices[i]) << endl;
    }
    double total = calculateTotal(choices);
    cout << "Total amount: " << total << " TK\n";
}

// Function to remove items from the order
void removeItem(vector<int>& choices)
{
    int cancelChoice;
    while (true)
    {
        displayOrder(choices);
        cout << "\nWould you like to remove any items? Enter the item number to remove (or 0 to finish): ";
        cin >> cancelChoice;

        if (cancelChoice == 0)
        {
            break;
        }
        else if (cancelChoice > 0 && cancelChoice <= choices.size())
        {
            choices.erase(choices.begin() + (cancelChoice - 1));
            cout << "Item removed.\n";
        }
        else
        {
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

int main()
{
    vector<int> selectedItems;
    int menuChoice, itemChoice;

    Appetizer appetizer;
    Sushi sushi;
    Soup soup;
    Snacks snacks;
    TraditionalDishes traditionalDishes;
    Platter platter;
    Drinks drinks;

    while (true)
    {
        cout << "\nMENU CATEGORIES:\n";
        cout << "1. Appetizers\n2. Sushi\n3. Soups\n4. Snacks\n5. Traditional Platters\n6. Seafood Platters\n7. Sweet Dishes\n8. Drinks\n9. Exit\n";
        cout << "Select a category to view the menu: ";
        cin >> menuChoice;

        if (menuChoice == 9)
        {
            break;
        }

        switch (menuChoice)
        {
        case 1:
            appetizer.showMenu();
            break;
        case 2:
            sushi.showMenu();
            break;
        case 3:
            soup.showMenu();
            break;
        case 4:
            snacks.showMenu();
            break;
        case 5:
            traditionalDishes.showMenu();
            break;
        case 6:
            platter.showMenu();
            break;
        case 7:
            platter.showSweetDishes();
            break;
        case 8:
            drinks.showMenu();
            break;
        default:
            cout << "Invalid category choice.\n";
            continue;
        }

        cout << "Enter the item number to add to your order (or 0 to stop adding items): ";
        cin >> itemChoice;

        if (itemChoice == 0)
        {
            break;
        }

        if (itemChoice >= 1 && itemChoice <= 40)
        {
            selectedItems.push_back(itemChoice);
            cout << getItemName(itemChoice) << " added to your order.\n";
        }
        else
        {
            cout << "Invalid item number.\n";
        }
    }

    // Allow the user to review and remove items before finalizing the order
    if (!selectedItems.empty())
    {
        removeItem(selectedItems);  // Call function to remove items if needed
        displayOrder(selectedItems);  // Final display of the order
    }

    cout << "Thank you for your order!\n";
    return 0;
}
