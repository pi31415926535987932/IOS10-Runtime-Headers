//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class SFRowCardSection, SearchUIImageView;

@interface SearchUIRowCardSectionView : SearchUICardSectionView
{
    SearchUIImageView *_leftImageView;
}

@property(retain, nonatomic) SearchUIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (double)separatorLeftInset;
- (id)addContainerWithImage:(id)arg1 text:(id)arg2 formatter:(id)arg3 left:(_Bool)arg4;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) SFRowCardSection *section; // @dynamic section;

@end
