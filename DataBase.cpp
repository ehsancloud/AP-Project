// Database class for record handling
class DataBase {
    public:
        DbInfo dbinfo;
        vector<Record> records;
    
        void insertRecord(string table_name, vector<string> values) {
            int table_index = dbinfo.getTableIndex(table_name);
            if (table_index == -1) {
                cout << "Table not found.\n";
                return;
            }
    
            Schema table = dbinfo.tables[table_index];
    
            if (values.size() != table.columnCount()) {
                cout << "Invalid number of values.\n";
                return;
            }
    
            records.push_back(Record(table_name, values));
            cout << "Record inserted successfully.\n";
        }
    
        void showAll() {
            for (int i = 0; i < records.size(); i++) {
                if (!records[i].meta.isDeleted) {
                    cout << records[i].meta.table_name << ": ";
                    for (int j = 0; j < records[i].data.size(); j++) {
                        cout << records[i].data[j] << " ";
                    }
                    cout << endl;
                }
            }
        }
    };