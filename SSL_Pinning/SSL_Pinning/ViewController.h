//
//  ViewController.h
//  SSL_Pinning
//
 
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *urlField;
@property (weak, nonatomic) IBOutlet UILabel *resultData;
- (IBAction)loadData:(id)sender;

@end

