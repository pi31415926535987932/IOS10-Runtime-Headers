//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SFFeedbackListener-Protocol.h>

@class NSString;

@protocol SGSuggestionsServiceSearchToShareProtocol <SFFeedbackListener>
- (void)queryPredictionsFeedbackReportForConversation:(NSString *)arg1 completionHandler:(void (^)(SGQPFeedbackReport *, NSError *))arg2;
- (void)queryPredictionsForConversation:(NSString *)arg1 count:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end
