//
//  DTPaymentRequest.h
//  Datatrans
//
//  Created by Kaspar Rohrer on 8/11/10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark Payment request

@interface DTPaymentRequest : NSObject <NSCopying> {
	NSString* _merchantId;
	NSString* _refno;
	NSString* _refno2;
	NSString* _refno3;
	NSString* _currencyCode;
	NSUInteger _amountInSmallestCurrencyUnit;

	NSString *_localizedPriceDescription;
}

@property (nonatomic, copy) NSString* merchantId;
@property (nonatomic, copy) NSString* refno;
@property (nonatomic, copy) NSString* refno2;
@property (nonatomic, copy) NSString* refno3;
@property (nonatomic, copy) NSString* currencyCode;
@property (nonatomic, assign) NSUInteger amountInSmallestCurrencyUnit;

@property (nonatomic, copy) NSString* localizedPriceDescription;

@end
