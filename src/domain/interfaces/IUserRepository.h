class IUserRepository {
    public:
    virtual ~IUserRepository() = default;
    virtual void addUser(const User& user) = 0;
    virtual std::vector<User> getUsers() const = 0;
};
