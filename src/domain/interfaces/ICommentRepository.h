class ICommentRepository {
    public:
    virtual ~ICommentRepository() = default;
    virtual void addComment(const Comemnt& comment) = 0;
    virtual std::vector<Comment> getCommentByUserId(int userId) const = 0;
};