// Database information holding all schemas
class DbInfo {
    public:
        vector<Schema> tables;
    
        void addTable(Schema table) {
            tables.push_back(table);
            cout << "Table '" << table.table_name << "' added successfully.\n";
        }
    
        int getTableIndex(string table_name) {
            for (int i = 0; i < tables.size(); i++) {
                if (tables[i].table_name == table_name)
                    return i;
            }
            return -1;
        }
    
        void listTables() {
            if (tables.empty()) {
                cout << "No tables defined.\n";
                return;
            }
            cout << "Defined tables:\n";
            for (int i = 0; i < tables.size(); i++) {
                cout << "- " << tables[i].table_name << endl;
            }
        }
    };