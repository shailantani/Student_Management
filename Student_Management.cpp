#include<iostream>
#include<conio.h>
#include<process.h>

class student {
protected:
    int rno;
    char fname[10], lname[10], cource[20], dob[15], mo[15], addr[20], city[10], email[30];
    int sub1, sub2, sub3, sub4, sub5, sub6, total;
    float per;

public:
    void input_details() {
        std::cout << "\n\n 1) Enter Roll No ===>";
        std::cin >> rno;
        std::cout << "\n";
        std::cout << "\n\n 2) Enter First Name ===>";
        std::cin >> fname;
        std::cout << "\n";
        std::cout << "\n\n 3) Enter Last Name ===>";
        std::cin >> lname;
        std::cout << "\n";
        std::cout << "\n\n 4) Enter Course ===>";
        std::cin >> cource;
        std::cout << "\n";
        std::cout << "\n\n 5) Enter Date Of Birth ===>";
        std::cin >> dob;
        std::cout << "\n";
        std::cout << "\n\n 6) Enter Mobile No ===>";
        std::cin >> mo;
        std::cout << "\n";
        std::cout << "\n\n 7) Enter Address ===>";
        std::cin >> addr;
        std::cout << "\n";
        std::cout << "\n\n 8) Enter City ===>";
        std::cin >> city;

        std::cout << "\n";
        std::cout << "\n\n 9) Enter Email ===>";
        std::cin >> email;
        std::cout << "\n";
        std::cout << "\n\nEnter the Mark of OODP ==>";
        std::cin >> sub1;
        std::cout << "\n";
        std::cout << "\n\nEnter the Mark of Mathematics ==>";
        std::cin >> sub2;
        std::cout << "\n";
        std::cout << "\n\nEnter the Mark of English ==>";
        std::cin >> sub3;
        std::cout << "\n";
        std::cout << "\n\nEnter the Mark of Chemistry ==>";
        std::cin >> sub4;
        std::cout << "\n";
        std::cout << "\n\nEnter the Mark of Biology ==>";
        std::cin >> sub5;
        std::cout << "\n";
        std::cout << "\n\nEnter the Mark of Philosophy ==>";
        std::cin >> sub6;
        std::cout << "\n";
        total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
        per = total / 6;
    }

    void output_details() {
        std::cout << "\tSRM IST, KTR" << std::endl;
        std::cout << "\n______________________________________________________________" << std::endl;
        std::cout << "\n 1) Roll No :---> " << rno;
        std::cout << "\n 2) First Name :---> " << fname;
        std::cout << "\t\t 3) Last Name :---> " << lname;
        std::cout << "\n 4) Course :---> " << cource;
        std::cout << "\t 5) Date Of Birth :---> " << dob;
        std::cout << "\n 6) Mobile No :---> " << mo;
        std::cout << "\t\t 7) Address :---> " << addr;
        std::cout << "\n 8) City :---> " << city;
        std::cout << "\n 9) Email :---> " << email;
    }

    void output_marksheet() {
        std::cout << "\n______________________________________________________________" << std::endl;
        std::cout << "Subject total marks obtained marks" << std::endl;
        std::cout << "______________________________________________________________" << std::endl;
        std::cout << "Marks of OODP 100 " << sub1 << std::endl;
        std::cout << "Marks of Mathematics 100 " << sub2 << std::endl;
        std::cout << "Marks of English 100 " << sub3 << std::endl;
        std::cout << "Marks of Chemistry 100 " << sub4 << std::endl;
        std::cout << "Marks of Biology 100 " << sub5 << std::endl;
        std::cout << "Marks of Philosophy 100 " << sub6 << std::endl;
        std::cout << "Percentage 100 " << per << std::endl;
        std::cout << "______________________________________________________________" << std::endl;
        std::cout << "Total Marks 600 " << total;

        if (per >= 90 && per <= 100) {
            std::cout << "\n\n\t\t Your Grade is :----> A+";
            std::cout << "\n";
        } else if (per >= 80 && per <= 90) {
            std::cout << "\n\n\t\t Your Grade is :----> A";
            std::cout << "\n";
        } else if (per >= 70 && per <= 80) {
            std::cout << "\n\t\t Your Grade is :----> B+";
        } else if (per >= 60 && per <= 70) {
            std::cout << "\n\t\t Your Grade is :----> B";
        } else if (per >= 50 && per <= 60) {
            std::cout << "\n\t\t Your Grad is :----> C";
        } else if (per >= 40 && per <= 50) {
            std::cout << "\n\t\t Your Grade is :---->D";
        } else {
            std::cout << "\n\t\t You Have Failed";
        }
    }
};

class master : virtual public student {
public:
    void create() {
        std::cout << "\n\n===========================> Insert Information <==========================\n\n";
        input_details();
    }

    void display() {
        std::cout << "\n\n=========================> Summary Report <============================\n\n";
        output_details();
        std::cout << "\n\n=========================> Student Marksheet Report <==========================\n\n";
        output_marksheet();
        std::cout << "\n\n\t=========================> End Of Marksheet <==========================\n\n";
        std::cout << "\n\n\t=========================> End of Report <=============================\n\n";
    }

    void update() {
        int choice;
        std::cout << "\n\n\t=========================> Update Information <=========================\n\n";
        std::cout << "\n\n\t ---------------> choose Details You Want to Perform <--------\n\n";
        std::cout << "\n\n 1) Roll No ===>" << rno << "\n";
        std::cout << "\n\n 2) First Name ===>" << fname << "\n";
        std::cout << "\n\n 
