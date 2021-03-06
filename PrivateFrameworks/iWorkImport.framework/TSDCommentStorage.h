/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate, NSString, TSKAnnotationAuthor;

@interface TSDCommentStorage : TSPObject <TSPCopying> {
    TSKAnnotationAuthor *mAuthor;
    NSDate *mCreationDate;
    NSString *mText;
}

@property(retain) TSKAnnotationAuthor * author;
@property(copy) NSDate * creationDate;
@property(copy) NSString * text;

- (void)appendText:(id)arg1;
- (id)author;
- (void)commentWillBeAddedToDocumentRoot;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)creationDateString;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 author:(id)arg2;
- (id)initWithContext:(id)arg1 text:(id)arg2 creationDate:(id)arg3 author:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)loadFromArchive:(const struct CommentStorageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Date {} *x6; struct Reference {} *x7; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct CommentStorageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Date {} *x6; struct Reference {} *x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
