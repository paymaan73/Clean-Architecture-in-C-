class CommentController {
public:
    explicit CommentController(std::shared_ptr<CommentService> commentService) : commentService(std::move(commentService)) {}

    void createComment(int id, int userId, const std::string& text) {
        try {
            commentService->createComment(id, userId, text);
            std::cout << "Comment created successfully.\n";
        } catch (const std::exception& e) {
            std::cerr << "Error creating comment: " << e.what() << "\n";
        }
    }

    void listCommentsByUser(int userId) const {
        auto comments = commentService->getUserComments(userId);
        std::cout << "Comments by User ID " << userId << ":\n";
        for (const auto& comment : comments) {
            std::cout << "Comment ID: " << comment.getId() << ", Text: " << comment.getText() << "\n";
        }
    }

private:
    std::shared_ptr<CommentService> commentService;
};