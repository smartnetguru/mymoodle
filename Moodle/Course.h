//
// This file is part of My Moodle - https://github.com/moodlehq/mymoodle
//
// My Moodle is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// My Moodle is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with My Moodle.  If not, see <http://www.gnu.org/licenses/>.
//
//  Course.h
//  Moodle
//
//  Created by Dongsheng Cai on 24/06/11.
//  Copyright (c) 2011 Moodle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Course : NSManagedObject {
    @private
}
@property (nonatomic, retain) NSNumber *id;
@property (nonatomic, retain) NSString *idnumber;
@property (nonatomic, retain) NSString *shortname;
@property (nonatomic, retain) NSString *fullname;
@property (nonatomic, retain) NSSet *participants;
@property (nonatomic, retain) NSManagedObject *site;
+ (NSInteger)countWithContext:(NSManagedObjectContext *)context site:(NSManagedObject *)site;

- (void)removeSections;
@end
