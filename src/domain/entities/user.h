class User {
    public:
    User(int id, const std::string& name): id(id), name(name) {
        if(name.empty()) {
            throw std::invalid_argument("User name cannot be empty.")
        }
    }

    int getId() const { return id; }

    std::string getName() const { return name; }


    private:
    int id;
    std::string name;
};

