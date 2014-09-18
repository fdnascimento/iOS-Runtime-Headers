/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNAbstractSlide, KNSlideNode, NSArray, NSDictionary, NSMutableDictionary, NSString, TSPLazyReference;

@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSKSearchTarget, TSCEResolverContainer> {
    boolmHasBodyInOutlineView;
    boolmHasExplicitBuilds;
    boolmHasNote;
    boolmHasTransition;
    boolmIsCollapsed;
    boolmIsCollapsedInOutlineView;
    boolmIsHidden;
    boolmSlideNumberVisible;
    boolmThumbnailsAreDirty;
    NSArray *mChildren;
    NSString *mClassicUniqueID;
    NSString *mCopiedFromSlideIdentifier;
    unsigned long long mEventCount;
    KNSlideNode *mParent;
    TSPLazyReference *mSlideReference;
    unsigned long long mSlideSpecificHyperlinksCount;
    unsigned int mTableNameCounter;
    NSMutableDictionary *mThumbnails;
    NSString *mUniqueIdentifier;
}

@property(retain) NSArray * children;
@property NSString * classicUniqueID;
@property(getter=isCollapsed) bool collapsed;
@property(getter=isCollapsedInOutlineView) bool collapsedInOutlineView;
@property(retain) NSString * copiedFromSlideIdentifier;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long eventCount;
@property bool hasBodyInOutlineView;
@property(readonly) bool hasBuildEvents;
@property(readonly) bool hasChildren;
@property(readonly) bool hasExplicitBuilds;
@property bool hasNote;
@property bool hasTransition;
@property(readonly) unsigned long long hash;
@property(getter=isHidden) bool hidden;
@property bool isSlideNumberVisible;
@property(readonly) KNSlideNode * next;
@property(readonly) KNSlideNode * nextSkippingCollapsed;
@property(readonly) KNSlideNode * nextSkippingHidden;
@property KNSlideNode * parent;
@property(readonly) KNSlideNode * previous;
@property(readonly) KNSlideNode * previousSkippingCollapsed;
@property(readonly) KNSlideNode * previousSkippingHidden;
@property(retain) KNAbstractSlide * slide;
@property(readonly) KNAbstractSlide * slideIfLoaded;
@property unsigned long long slideSpecificHyperlinksCount;
@property(readonly) Class superclass;
@property(readonly) NSDictionary * thumbnails;
@property bool thumbnailsAreDirty;
@property(readonly) NSString * uniqueIdentifier;

+ (id)lastSlideUnderSlideNode:(id)arg1;
+ (bool)needsObjectUUID;
+ (id)nodesAndDescendantsForNodes:(id)arg1 includeSkippedSlideNodes:(bool)arg2 includingCollapsedSlideNodes:(bool)arg3;
+ (id)nodesAndDescendantsForNodes:(id)arg1;
+ (id)p_nextAfterSlideNode:(id)arg1;
+ (id)p_previousToSlideNode:(id)arg1;
+ (id)parentSlideNodeForInfo:(id)arg1;
+ (id)slideNodeForSelectionModel:(id)arg1 withSelection:(id)arg2;

- (void)addThumbnail:(id)arg1 atSize:(struct CGSize { double x1; double x2; })arg2;
- (id)childEnumerator;
- (id)childSearchTargets;
- (id)children;
- (id)classicUniqueID;
- (id)copiedFromSlideIdentifier;
- (id)copyForPasteboard:(id)arg1;
- (void)dealloc;
- (unsigned long long)depth;
- (id)descendants;
- (id)descendantsIncludingSkippedSlideNodes:(bool)arg1 includingCollapsedSlideNodes:(bool)arg2;
- (void)didLoadSlide:(id)arg1;
- (unsigned long long)eventCount;
- (void)generateNewUniqueIdentifier;
- (bool)hasBodyInOutlineView;
- (bool)hasBuildEvents;
- (bool)hasChildren;
- (bool)hasExplicitBuilds;
- (bool)hasNote;
- (bool)hasTransition;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isCollapsed;
- (bool)isCollapsedInOutlineView;
- (bool)isHidden;
- (bool)isSlideNumberVisible;
- (void)loadFromArchive:(const struct SlideNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct Reference {} *x4; struct RepeatedPtrField<TSP::DataReference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Size> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; boolx7; boolx8; boolx9; boolx10; boolx11; boolx12; boolx13; boolx14; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; boolx17; boolx18; unsigned int x19; struct Reference {} *x20; struct RepeatedPtrField<TSP::Reference> { void **x_21_1_1; int x_21_1_2; int x_21_1_3; int x_21_1_4; } x21; unsigned int x22; int x23; unsigned int x24[1]; }*)arg1 unarchiver:(id)arg2;
- (id)next;
- (id)nextSkippingCollapsed;
- (id)nextSkippingHidden;
- (unsigned int)nextUntitledResolverIndex;
- (void)p_addDescendantsToArray:(id)arg1 includeSkippedSlideNodes:(bool)arg2 includeCollapsedSlideNodes:(bool)arg3;
- (void)p_commonInit;
- (id)parent;
- (id)previous;
- (id)previousSkippingCollapsed;
- (id)previousSkippingHidden;
- (void)removeAllThumbnails;
- (void)removeThumbnailAtSize:(struct CGSize { double x1; double x2; })arg1;
- (id)resolverMatchingName:(id)arg1;
- (bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)revert;
- (void)saveToArchive:(struct SlideNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct Reference {} *x4; struct RepeatedPtrField<TSP::DataReference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Size> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; boolx7; boolx8; boolx9; boolx10; boolx11; boolx12; boolx13; boolx14; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; boolx17; boolx18; unsigned int x19; struct Reference {} *x20; struct RepeatedPtrField<TSP::Reference> { void **x_21_1_1; int x_21_1_2; int x_21_1_3; int x_21_1_4; } x21; unsigned int x22; int x23; unsigned int x24[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setClassicUniqueID:(id)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setCollapsedInOutlineView:(bool)arg1;
- (void)setCopiedFromSlideIdentifier:(id)arg1;
- (void)setHasBodyInOutlineView:(bool)arg1;
- (void)setHasNote:(bool)arg1;
- (void)setHasTransition:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsSlideNumberVisible:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setSlide:(id)arg1;
- (void)setSlideSpecificHyperlinksCount:(unsigned long long)arg1;
- (void)setThumbnailsAreDirty:(bool)arg1;
- (id)slide;
- (id)slideIfLoaded;
- (unsigned long long)slideSpecificHyperlinksCount;
- (id)thumbnails;
- (bool)thumbnailsAreDirty;
- (id)uniqueIdentifier;
- (void)uniquifyTableNamesForUpgradeOrImport;
- (void)updateEventCount;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end