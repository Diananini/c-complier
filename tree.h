enum//大类型，语句、表达式、声明
{
	STMT_NODE = 0,
	EXPR_NODE,
	DECL_NODE
};

enum//语句子类型
{
	IF_STMT = 0,
	WHILE_STMT,
	INPUT_STMT,
	PRINT_STMT,
	COMP_STMT
};

enum//表达式子类型
{
	TYPE_EXPR = 0,
	OP_EXPR,
	NOT_EXPR,
	ARRAY_EXPR,//数组
	CONST_EXPR,
	ID_EXPR
};

enum//声明
{
	VAR_DECL = 0,
	ARRAY_DECL
};

enum//变量类型
{
	Notype = 0,
	Integer,
	Boolean,
	Char
};

#define MAX_CHILDREN 4//允许孩子最多数目


union NodeAttr {
	int op;
	int vali;
	char valc;
	int symtbl_seq;//所在符号表中的位置
	
	NodeAttr(void) { op = 0; }//操作符
	NodeAttr(int i)	{ op = i; }//操作符
	NodeAttr(char c) { valc = c; }//字符型
};

union Label {
	struct {
		string true_label;
		string false_label;
	};
	struct {
		string begin_label;
		string next_label;
	};
};

struct Node
{
	struct Node *children[MAX_CHILDREN];
	struct Node *sibling;//兄弟
	int lineno;//所在行
	int kind;//类型
	int kind_kind;//子类型
	NodeAttr attr;//属性
	int type;//变量类型
	int seq;//节点编号
	int temp_var;
	Label label;

	void output(void);
};

class tree
{
private:
	Node *root;
	static node_seq;//节点编号
	static temp_var_seq;//临时变量编号
	static label_seq;

private:
	void type_check(Node *t);//查错
	void get_temp_var(Node *t);
	string new_label(void);
	void recursive_get_label(Node *t);
	void stmt_get_label(Node *t);
	void expr_get_label(Node *t);
	void gen_header(ostream &out);
	void gen_decl(ostream &out, Node *t);
	void recursive_gen_code(ostream &out, Node *t);
	void stmt_gen_code(ostream &out, Node *t);
	void expr_gen_code(ostream &out, Node *t);

public:
	Node *NewRoot(int kind, int kind_kind, NodeAttr attr, int type,
		Node *child1 = NULL, Node *child2 = NULL, Node *child3 = NULL, Node *child4 = NULL);
	void get_label(void);
	void gen_code(ostream &out);
};