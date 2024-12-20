class InMemoryUserRepository : public IUserRepository {
public:
    void addUser(const User& user) override {
        users.push_back(user);
    }

    std::vector<User> getUsers() const override {
        return users;
    }

private:
    std::vector<User> users;
};