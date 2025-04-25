// Represents a column in a table
class Column {
    public:
        string column_name;
        string data_type;
    
        Column() {}
        Column(string name, string type) {
            column_name = name;
            data_type = type;
        }
    };