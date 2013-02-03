/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIAlertView, NSIndexPath;

@interface IUVideoEpisodesViewController : IUVideoPartListViewController <UIAlertViewDelegate> {
    UIAlertView *_deleteConfirmAlertView;
    NSIndexPath *_expandedIndexPath;
    float _expandedRowHeight;
}

@property(retain) NSIndexPath * expandedIndexPath;

- (void)_cancelDeleteConfirmAlertView:(BOOL)arg1;
- (void)_deleteEpisodeAtIndex:(int)arg1;
- (void)_destroyDeleteConfirmAlertView;
- (void)_moreButtonPressedForCell:(id)arg1;
- (void)_rentalDataDidLoadNotification:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)cancelMoreButtonExpansion;
- (void)dealloc;
- (id)expandedIndexPath;
- (id)indexPathForMediaItem:(id)arg1 atTime:(double)arg2;
- (id)indexPathForRowOfContentPosition;
- (id)init;
- (id)mediaItemAtIndexPath:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setExpandedIndexPath:(id)arg1;
- (void)startPlaybackFromIndexPath:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (Class)tableViewCellClass;
- (id)title;
- (unsigned int)trackToPlayInDataSource:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end