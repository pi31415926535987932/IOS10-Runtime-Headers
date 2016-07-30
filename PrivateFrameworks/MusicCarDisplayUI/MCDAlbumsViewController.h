//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCDTableViewController.h>

@class MPMediaPredicate;

@interface MCDAlbumsViewController : MCDTableViewController
{
    MPMediaPredicate *_compilationPredicate;
    _Bool _alwaysShowRecents;
}

+ (id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
@property(nonatomic) _Bool alwaysShowRecents; // @synthesize alwaysShowRecents=_alwaysShowRecents;
- (void).cxx_destruct;
- (void)reloadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateQuery;
- (void)shouldShowHeadersAndFooters:(_Bool)arg1;
- (void)_limitedUIDidChange;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;

@end
