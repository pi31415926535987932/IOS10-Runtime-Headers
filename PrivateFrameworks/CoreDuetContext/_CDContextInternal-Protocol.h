//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuetContext/_CDContext-Protocol.h>

@class NSObject, _CDContextValue, _CDContextualKeyPath;
@protocol NSCopying><NSSecureCoding;

@protocol _CDContextInternal <_CDContext>
- (void)setContextValue:(_CDContextValue *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2;
- (_CDContextValue *)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 returningMetadataForContextualKeyPath:(_CDContextualKeyPath *)arg2;
- (_CDContextValue *)propertiesForContextualKeyPath:(_CDContextualKeyPath *)arg1;
@end

