//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UILabel;
@protocol PSTimeRangeCellDelegate;

@interface PSTimeRangeCell : PSTableCell
{
    UILabel *_fromTitle;
    UILabel *_toTitle;
    UILabel *_fromTime;
    UILabel *_toTime;
    id <PSTimeRangeCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

