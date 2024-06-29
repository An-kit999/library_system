#include<iostream>
#include<string>

class Book{
    private:
        std::string title;
        std::string author;
        std::string ISBN;
        bool isBorrowed;

    public:
        // Constructor
        Book(std::string t, std::string a, std::string isbn) : title(t), author(a), ISBN(isbn), isBorrowed(false){}

        // Method to borrow book
        void borrowBook(){
            if (!isBorrowed){
                isBorrowed = true;
                std::cout<<title<< " has been borrowed. "<<std::endl;
            }
            else{
                std::cout<<title<< "is already borrowed. "<<std::endl;
            }
        }

        //Method to return the book
        void returnBook(){
            if (isBorrowed){
                isBorrowed = false;
                std::cout<<title<< "returned successfully."<<std::endl;
            }
            else{
                std::cout<<title<< "was not borrowed."<<std::endl;
            }
        }
        //Method to display details
        void displayDetails()
            {
            std::cout<<"Title: "<<title<<"\n"<<"Author: "<<author<<"\n"<<"ISBN: "<<ISBN<<"\n"<<"Status: "<<(isBorrowed ? "Borrowed": "Available")<<std::endl;

            }


    
};

int main(){
    Book book1("The Great Gatsby", " F. Scott Fitzgerald", "1245");
    Book book2("1984", "George Orwell", "4512" );
    book1.displayDetails();
    return 0;

}