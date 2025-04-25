// Represents a table schema
class Schema {
    public:
        string table_name;
        vector<Column> columns;
    
        void define(string name, vector<Column> cols) {
            table_name = name;
            columns = cols;
        }
    
        void displayColumns() {
            cout << "Table: " << table_name << "\nColumns:\n";
            for (int i = 0; i < columns.size(); i++) {
                cout << "- " << columns[i].column_name << " : " << columns[i].data_type << endl;
            }
        }
    
        bool hasColumn(string column_name) {
            for (int i = 0; i < columns.size(); i++) {
                if (columns[i].column_name == column_name)
                    return true;
            }
            return false;
        }
    
        int columnCount() {
            return columns.size();
        }
    };