int main() {
    DataBase db;

    // Define columns for "Ketabha" table
    vector<Column> book_columns = {
        Column("Shabak", "string"),  
        Column("Onvan", "string"),   
        Column("Nevisandeh", "string"),  
        Column("Sal", "int")         
    };

    // Define columns for "Moshtarian" table
    vector<Column> customer_columns = {
        Column("Kod_Moshteri", "int"),  
        Column("Nam", "string"),       
        Column("Email", "string")      
    };

    // Define and add the "Ketabha" table schema
    Schema books;
    books.define("Ketabha", book_columns);
    db.dbinfo.addTable(books);

    // Define and add the "Moshtarian" table schema
    Schema customers;
    customers.define("Moshtarian", customer_columns);
    db.dbinfo.addTable(customers);

    // Insert records into the "Ketabha" table
    db.insertRecord("Ketabha", {"978-3-16-148410-0", "C++ Programming", "Bjarne Stroustrup", "2015"});
    db.insertRecord("Ketabha", {"978-0-13-110163-0", "The C Programming Language", "Brian Kernighan, Dennis Ritchie", "1978"});

    // Insert records into the "Moshtarian" table
    db.insertRecord("Moshtarian", {"001", "Ehsan Kazemi", "ehsunkuzemi@gmail.com"});
    db.insertRecord("Moshtarian", {"002", "Amir Mirzakhani", "amirmirzakhani@gmail.com"});

    // Show all records in the database
    cout << "\nDisplaying all records:\n";
    db.showAll();

    // List all tables defined in the database
    cout << "\nListing table definitions:\n";
    db.dbinfo.listTables();

    // Show the column definitions for each table
    cout << "\nDisplaying column info for each table:\n";
    for (int i = 0; i < db.dbinfo.tables.size(); i++) {
        db.dbinfo.tables[i].displayColumns();
        cout << endl;
    }

    return 0;
}
