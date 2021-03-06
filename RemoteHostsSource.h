//
//  RemoteHostsSource.h
//  RemoteHosts
//
//  Created by Rob McBroom on 12/24/09.
//

#import "RemoteHosts.h"

@interface QSRemoteHostsSource : QSObjectSource
{
	IBOutlet NSTextField *hostsFilePath;
}
- (NSString *)fullPathForSettings:(NSDictionary *)settings;
- (IBAction)selectHostsFile:(NSButton *)sender;
@end
