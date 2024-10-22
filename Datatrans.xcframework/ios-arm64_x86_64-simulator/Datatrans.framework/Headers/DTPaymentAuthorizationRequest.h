
#import <Foundation/Foundation.h>

@class DTPaymentMethodInfo;

@interface DTPaymentAuthorizationRequest : NSObject

@property (nonatomic, assign) BOOL autoSettlement;
@property (nonatomic, nullable, copy) NSString* klarnaAuthToken;
@property (nonatomic, nonnull, copy) NSString* merchantId;
@property (nonatomic, nullable, copy) NSDictionary<NSString *, NSString *>* merchantProperties;
@property (nonatomic, nullable, copy) DTPaymentMethodInfo* paymentMethod;
@property (nonatomic, nonnull, copy) NSString* refno;
@property (nonatomic, nullable, copy) NSString* refno2;
@property (nonatomic, nullable, copy) NSString* refno3;
@property (nonatomic, nonnull, copy) NSString* transactionId;

@end
