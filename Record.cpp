// Metadata for each record
class Metadata {
    public:
        string table_name;
        bool isDeleted;
    
        Metadata(string name = "", bool deleted = false) {
            table_name = name;
            isDeleted = deleted;
        }
    };
    
    // Represents a record in the database
    class Record {
    public:
        Metadata meta;
        vector<string> data;
    
        Record() {}
    
        Record(string table_name, vector<string> row_data, bool deleted = false) {
            meta = Metadata(table_name, deleted);
            data = row_data;
        }
    };