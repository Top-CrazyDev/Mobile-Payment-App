#import <Foundation/Foundation.h>

@protocol DTErrorPresenter <NSObject>

- (void)showCriticalErrorWithTitle:(nonnull NSString *)title message:(nonnull NSString *)message dismissAction:(void (^_Nonnull)(void))dismissAction; // ok button
- (void)showErrorWithTitle:(nonnull NSString *)title message:(nonnull NSString *)message; // ok button
- (void)showErrorWithTitle:(nonnull NSString *)title message:(nonnull NSString *)message dismissAction:(void (^_Nullable)(void))dismissAction retryAction:(void (^_Nullable)(void))retryAction; // ok or retry button (if action provided), cancel and retry button if both actions provided

@end
