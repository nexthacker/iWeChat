//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MyInvoiceData, NSString;

@protocol MyInvoiceInfoViewControllerDelegate <NSObject>
- (void)OnJsapiAddInvoiceFail;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceSuccess:(NSString *)arg1;
- (void)OnEditInvoiceData:(MyInvoiceData *)arg1;
- (void)OnAddNewInvoiceData:(MyInvoiceData *)arg1 ofGroupId:(long long)arg2;
@end
