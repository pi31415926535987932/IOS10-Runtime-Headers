//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSTabBarItem-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKJSNavigationDocument, IKJSTabBar, JSManagedValue, NSString;
@protocol IKAppNavigationController;

@interface IKJSTabBarItem : IKJSObject <IKJSTabBarItem, JSExport>
{
    id <IKAppNavigationController> _navigationControllerDelegate;
    NSString *_identifier;
    NSString *_rootURL;
    IKJSNavigationDocument *_navigationDocument;
    JSManagedValue *_managedNavigationDocument;
    JSManagedValue *_managedSelf;
    IKJSTabBar *_owner;
}

@property(nonatomic) __weak IKJSTabBar *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) JSManagedValue *managedSelf; // @synthesize managedSelf=_managedSelf;
@property(retain, nonatomic) JSManagedValue *managedNavigationDocument; // @synthesize managedNavigationDocument=_managedNavigationDocument;
@property(readonly, nonatomic) IKJSNavigationDocument *navigationDocument; // @synthesize navigationDocument=_navigationDocument;
@property(readonly, nonatomic) NSString *rootURL; // @synthesize rootURL=_rootURL;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak id <IKAppNavigationController> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 identifier:(id)arg2 rootURL:(id)arg3 navigationController:(id)arg4 owner:(id)arg5;

@end
