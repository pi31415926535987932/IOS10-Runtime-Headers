//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PRCandidate : NSObject
{
    NSString *_string;
    double _errorScore;
    double _lmScore;
    _Bool _blacklisted;
}

+ (id)transpositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 intendedFirstCharacter:(unsigned short)arg3 intendedSecondCharacter:(unsigned short)arg4;
+ (id)replacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 intendedCharacter:(unsigned short)arg3 actualCharacter:(unsigned short)arg4;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 errorType:(unsigned long long)arg3;
+ (id)transpositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5;
+ (id)replacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorScore:(double)arg4;
+ (id)transpositionCandidateWithString:(id)arg1 intendedFirstCharacter:(unsigned short)arg2 intendedSecondCharacter:(unsigned short)arg3;
+ (id)replacementCandidateWithString:(id)arg1 intendedCharacter:(unsigned short)arg2 actualCharacter:(unsigned short)arg3;
+ (id)candidateWithString:(id)arg1 errorType:(unsigned long long)arg2;
+ (id)candidateWithString:(id)arg1 errorScore:(double)arg2;
+ (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2;
+ (double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2;
+ (double)errorScoreForType:(unsigned long long)arg1;
- (double)score;
- (_Bool)isBlacklisted;
- (void)setBlacklisted:(_Bool)arg1;
- (double)languageModelScore;
- (void)setLanguageModelScore:(double)arg1;
- (double)errorScore;
- (void)setErrorScore:(double)arg1;
- (id)string;
- (void)dealloc;
- (id)description;
- (id)initWithString:(id)arg1 errorScore:(double)arg2;

@end

