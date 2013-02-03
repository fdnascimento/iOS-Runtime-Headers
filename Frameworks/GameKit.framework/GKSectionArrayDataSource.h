/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKStatusSection, NSSet, NSDate;

@interface GKSectionArrayDataSource : NSObject <GKTableViewControllerDataSource> {
    NSArray *_contentSections;
    NSDate *_expirationDate;
    NSArray *_footerSections;
    NSArray *_headerSections;
    GKStatusSection *_statusSection;
    NSSet *_visibleSections;
}

@property(retain) NSArray * contentSections;
@property(retain) NSDate * expirationDate;
@property(retain) NSArray * footerSections;
@property(retain) NSArray * headerSections;
@property(readonly) NSArray * sections;
@property(retain) GKStatusSection * statusSection;
@property(retain) NSSet * visibleSections;

- (id)contentSections;
- (void)dealloc;
- (id)expirationDate;
- (id)footerSections;
- (id)headerSections;
- (BOOL)isExpired;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)sections;
- (void)setContentSections:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFooterSections:(id)arg1;
- (void)setHeaderSections:(id)arg1;
- (void)setStatusSection:(id)arg1;
- (void)setVisibleSections:(id)arg1;
- (id)statusSection;
- (void)tableView:(id)arg1 prepareExpensiveContentAtIndexPaths:(id)arg2 withCompletionHandler:(id)arg3;
- (id)tableView:(id)arg1 sectionAtIndex:(int)arg2;
- (id)visibleSections;

@end