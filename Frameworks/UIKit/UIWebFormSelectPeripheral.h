//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIFormPeripheral-Protocol.h>

@class DOMHTMLSelectElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral>
{
    DOMHTMLSelectElement *_selectionNode;
    id <UIWebFormControl> _selectControl;
}

+ (id)createPeripheralWithDOMHTMLSelectElement:(id)arg1;
@property(retain, nonatomic) id <UIWebFormControl> _selectControl; // @synthesize _selectControl;
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // @synthesize _selectionNode;
- (void)endEditing;
- (void)beginEditing;
- (id)assistantView;
- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1;

@end

